<?php
function mymetatags_settings(){
$mymetatagslist = mymetatags_mymetatags_list();
	$salidammt = '';
	 foreach ($mymetatagslist as $key => $value){
		$salidammt.= '<p>'.$key.' ----> '.$value.'<p>';
	 }
	return $salidammt; 
	//return "<p><strong>Hola Mundo,<em>de las meta tags </em> en las cabeceras!!</strong></p> ";

}
function mymetatags_overview(){
	return "<p><strong>Hola Mundo,<em>de las meta tags </em> en las cabeceras overview!!</strong></p> ";

}

function mymetatags_list(){
	
	
	return "<p><strong>Hola Mundo,<em>de las meta tags </em> LIST!!</strong></p> ";

}

function mymetatags_update(){
	/*$mymetatagspaths  = mymetatags_mymetatags_map();
	$salidapath = '';
	foreach ($mymetatagspaths as $key => $value){
		$salidapath.= '<p>'.$key.' ----> '.$value.'<p>';
	 }*/
	return mymetatags_mymetatags_map();//$salidapath;
	//return "<p><strong>Hola Mundo,<em>de las meta tags </em> UPDATES!!</strong></p> ";

}