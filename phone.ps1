ErrorActionPreference = "Stop"
# Location on your laptop: C:\Users\rohit\Pictures\Ooty
$DestDirForPhotos = "C:\Users\rohit\Pictures\Ooty"
$DestDirForVoiceRecordings = "C:\Users\rohit\Pictures\Ooty"


function Create-Dir($path) {
  if (! (Test-Path -Path $path)) {
    Write-Host "Creating: $path"
    New-Item -Path $path -ItemType Directory
  }
  else {
    Write-Host "Path $path already exist"
  }
}


function Get-SubFolder($parentDir, $subPath) {
  $result = $parentDir
  foreach ($pathSegment in ($subPath -split "\\")) {
    $result = $result.GetFolder.Items() | Where-Object { $_.Name -eq $pathSegment } | select -First 1
    if ($result -eq $null) {
      throw "Not found $subPath folder"
    }
  }
  return $result;
}


function Get-PhoneMainDir($phoneName) {
  $o = New-Object -com Shell.Application
  $rootComputerDirectory = $o.NameSpace(0x11)
  $phoneDirectory = $rootComputerDirectory.Items() | Where-Object { $_.Name -eq $phoneName } | select -First 1
    
  if ($phoneDirectory -eq $null) {
    throw "Not found '$phoneName' folder in This computer. Connect your phone."
  }
  
  return $phoneDirectory;
}


function Get-FullPathOfMtpDir($mtpDir) {
  $fullDirPath = ""
  $directory = $mtpDir.GetFolder
  while ($directory -ne $null) {
    $fullDirPath = -join ($directory.Title, '\', $fullDirPath)
    $directory = $directory.ParentFolder;
  }
  return $fullDirPath
}



function Copy-FromPhone-ToDestDir($sourceMtpDir, $destDirPath) {
  Create-Dir $destDirPath
  $destDirShell = (new-object -com Shell.Application).NameSpace($destDirPath)
  $fullSourceDirPath = Get-FullPathOfMtpDir $sourceMtpDir
 
  Write-Host "Copying from: '" $fullSourceDirPath "' to '" $destDirPath "'"
 
  $copiedCount = 0;
 
  foreach ($item in $sourceMtpDir.GetFolder.Items()) {
    $itemName = ($item.Name)
    $fullFilePath = Join-Path -Path $destDirPath -ChildPath $itemName
   
    if (Test-Path $fullFilePath) {
      Write-Host "Element '$itemName' already exists"
    }
    else {

      # Write-Host $item.name.
      # if ($item.lastwritetime -gt ‘19/10/23’ -AND $item.lastwritetime -le ‘25/10/23’)
      # { $copiedCount++; }
      Get-ItemPropertyValue -Name CreationTime -Filter { $_.CreationTime -gt ‘19/10/23’ -AND $_.CreationTime -le ‘25/10/23’ }
      #  Write-Host ("Copying #{0}: {1}{2}" -f $copiedCount, $fullSourceDirPath, $item.Name)
      # Write-Host
      #  $destDirShell.CopyHere($item)
    }
  }
  Write-Host "Copied '$copiedCount' elements from '$fullSourceDirPath'"
}


$phoneName = "OnePlus Nord2 5G" #Phone name as it appears in This PC
$phoneRootDir = Get-PhoneMainDir $phoneName

# $phoneCardPhotosSourceDir = Get-SubFolder $phoneRootDir "Card\DCIM\Camera"
# Copy-FromPhone-ToDestDir $phoneCardPhotosSourceDir $DestDirForPhotos

$phonePhotosSourceDir = Get-SubFolder $phoneRootDir "Internal shared storage\DCIM\Camera"
Copy-FromPhone-ToDestDir $phonePhotosSourceDir $DestDirForPhotos

# $phoneVoiceRecorderSourceDir = Get-SubFolder $phoneRootDir "Phone\VoiceRecorder"
# Copy-FromPhone-ToDestDir $phoneVoiceRecorderSourceDir $DestDirForVoiceRecordings