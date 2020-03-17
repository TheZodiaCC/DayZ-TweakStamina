class CfgMods
{
	class UnlimitedStam
	{
	    dir = "UnlimitedStam";
	    picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
	    name = "UnlimitedStam";
	    credits = "";
	    author = "";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

	    dependencies[] = {"World"};

	    class defs
	    {
	        class worldScriptModule
            {
                value = "";
                files[] = {"UnlimitedStam/scripts/4_World"};
            };
        };
    };
};
class CfgPatches
{
	class UnlimitedStamScipts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};