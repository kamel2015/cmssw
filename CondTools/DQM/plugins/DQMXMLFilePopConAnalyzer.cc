#include "CondCore/PopCon/interface/PopConAnalyzer.h"
#include "CondTools/DQM/interface/DQMXMLFileSourceHandler.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "CondFormats/Common/interface/Serialization.h"
#include "CondFormats/DQMObjects/interface/Serialization.h"

typedef popcon::PopConAnalyzer<popcon::DQMXMLFileSourceHandler> DQMXMLFilePopConAnalyzer;
//define this as a plug-in
DEFINE_FWK_MODULE(DQMXMLFilePopConAnalyzer);
