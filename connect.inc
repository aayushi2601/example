<?php
// we've writen this code where we need
function __autoload($classname) {
    $filename = "./classes/". $classname .".php";
    require ($filename);
} 
session_start();
$server='localhost'; 
$username='root'; 
$password='igdefault';
$databasename= 'example';



try {
    $conn = new PDO("mysql:host=$server;dbname=".$databasename, $username, $password);
    // set the PDO error mode to exception
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    echo "Connected successfully";
    }
catch(PDOException $e)
    {
    echo "Connection failed: " . $e->getMessage();
    }




/*
if (!$link = mysql_connect($server, $username, $password)) {
    echo 'Could not connect to mysql';
    exit;
}

if (!mysql_select_db($databasename, $link)) 
{
    echo 'Could not select database';
    exit;
}
 * *
 */
?>
