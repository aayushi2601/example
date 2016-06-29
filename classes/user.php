<?php
class user {
    private $userid=null;
    function islogin(){
        return true;
    }
    function setUserID($userid){
        $this->userid=$userid;
    }
    
    function getUserID(){
        return $this->userid;
    }
    function getUserDetails(){
        
    }
}

