#pragma once

#include "PlotJuggler/messageparser_base.h"

class ParserFactoryRaw : public PJ::ParserFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "facontidavide.PlotJuggler3.ParserFactoryPlugin")
    Q_INTERFACES(PJ::ParserFactoryPlugin)

public:
    ParserFactoryRaw();
    ~ParserFactoryRaw() override;

    const char* name() const override
    {
        return "ParserFactoryRaw";
    }

    const char* encoding() const override
    {
        return "raw";
    }

    MessageParserPtr createParser(const std::string& topic_name,
                                  const std::string& type_name,
                                  const std::string& schema,
                                  PlotDataMapRef& data) override;

    QWidget* optionsWidget() override
    {
        return _widget;
    }

protected:
    QWidget* _widget;

}
