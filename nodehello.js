var http=require('http');
http.createServer(function(req,res)
{
res.writeHead('Content-Type':'text/html');
res.write('<html><body><h1>Hello World</h1></html>');
res.end;
}).listen(8080);
consol.log('Server Started');