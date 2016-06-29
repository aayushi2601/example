<?php include_once('connect.inc'); ?>
<?php include_once('header.inc'); ?>
        <div id="section">
            <h1><?php echo $_SESSION['uname']; ?></h1>
            <form action="upload.php" method="post" enctype="multipart/form-data">
            Select image to upload:
            <input type="file" name="fileToUpload" id="fileToUpload">
            <input type="submit" value="Upload Image" name="submit">
</form>
            
        </div>
<?php include_once('footer.inc'); ?>
