Action()
{

	web_url("index.html", 
		"URL=http://10.10.30.94/tours/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(13);

	web_submit_form("login", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=username", "Value=", ENDITEM, 
		"Name=password", "Value=", ENDITEM, 
		"Name=login.x", "Value=27", ENDITEM, 
		"Name=login.y", "Value=11", ENDITEM, 
		LAST);

	return 0;
}