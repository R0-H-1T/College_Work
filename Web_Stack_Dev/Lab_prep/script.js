

function GetMap(lat, lon){
    if ( !lat && !lon){
        var map = new Microsoft.Maps.Map('#demo');
    }
    var map = new Microsoft.Maps.Map('#demo', {
        mapTypeID: Microsoft.Maps.MapTypeId.road,
        center: new Microsoft.Maps.Location(lat, lon),
        zoom: 15
    })
    var center = map.getCenter();
    var pushpin = new Microsoft.Maps.Pushpin(center, {
        color: 'blue'
    })
    map.entities.push(pushpin);
}


function getLocation(){
    if(navigator.geolocation){
        navigator.geolocation.getCurrentPosition(showPosition);
    }else{
        document.getElementById('demo').innerHTML = 'Something went wrong\nPerhaps your location is disabled';
    }
}

function showPosition(position){
    GetMap(position.coords.latitude, position.coords.longitude);
}






function getLocation(){
    if(navigator.geolocation){
        navigator.geolocation.getCurrentPosition(showPosition);
    }
}

function showPosition(position){
    GetMap(position.coords.latitude, position.coords.longitude)
}


function GetMap(lat, lon){
    if( !lat && !lon ){
        var map = new Microsoft.Maps.Map('#demo');
    }
    var map = new Microsoft.Maps.Map('#demo', {
        center: new Mircrosoft.Maps.Location(lat, lon),
        mapTypeID: new Microsoft.Maps.MapTypeId.road,
        zoom: 15
    })
    var center = map.getCenter()
    var pushpin = new Microsoft.Maps.Pushpin(center, {
        color: blue
    })
    map.entities.push(pushpin)
}