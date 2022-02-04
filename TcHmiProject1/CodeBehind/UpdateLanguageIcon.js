// Provider for a best effort IntelliSense of Visual Studio 2017.
/// <reference path="./../../Packages/Beckhoff.TwinCAT.HMI.Framework.12.752.0/runtimes/native1.12-tchmi/Lib/jquery.d.ts" />
/// <reference path="./../../Packages/Beckhoff.TwinCAT.HMI.Framework.12.752.0/runtimes/native1.12-tchmi/TcHmi.d.ts" />
/// <reference path="./../../Packages/Beckhoff.TwinCAT.HMI.Framework.12.752.0/runtimes/native1.12-tchmi/Controls/System/TcHmiControl/Source.d.ts" />

// Provider for a best effort IntelliSense of Visual Studio 2013/2015.
/// <reference path="./../../Packages/Beckhoff.TwinCAT.HMI.Framework.12.752.0/runtimes/native1.12-tchmi/Lib/jquery/jquery.js" />
/// <reference path="./../../Packages/Beckhoff.TwinCAT.HMI.Framework.12.752.0/runtimes/native1.12-tchmi/TcHmi.js" />

(function (TcHmi) {

    var UpdateLanguageIcon = function (NavBar, Locale) {
        if (!NavBar)
            return;

        if (!Locale)
            return;

        if (NavBar.getType() !== "TcHmi.Controls.ResponsiveNavigation.TcHmiNavigationBar")
            return;

        var data = NavBar.getMenuSourceDataRaw();

        if (!data)
            return;

        var icon;

        for (var i = 0; i < data[0].children.length; i++) {
            if (data[0].children[i].children) {
                for (var j = 0; j < data[0].children[i].children.length; j++) {
                    if (data[0].children[i].children[j].parameter === Locale) {
                        icon = data[0].children[i].children[j].image;
                        break;
                    }
                }
            }
        }

        if (icon) {
            data[0].image = icon;
            NavBar.setMenuSourceData(data);
        }
    };

    TcHmi.Functions.registerFunction('UpdateLanguageIcon', UpdateLanguageIcon);
})(TcHmi);