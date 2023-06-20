#include "raw_factory.h"

#include <QSettings>
#include <QMessageBox>

#include "PlotJuggler/fmt/format.h"

#include "dataformatpanel.h"


ParserFactoryRaw::ParserFactoryRaw()
{
    _widget = new DataFormatPanel(nullptr);
}

ParserFactoryRaw::~ParserFactoryRaw()
{
    delete _widget;
}