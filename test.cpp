#include <iostream>
#include <memory>
#include "orc/orc/OrcFile.hh"
#include "orc/orc/ColumnPrinter.hh"
#include "orc/orc/orc-config.hh"

using orc::ColumnVectorBatch;
using orc::createReader;
using orc::ReaderOptions;
using orc::readLocalFile;

int main() {
  std::unique_ptr<orc::InputStream> instream;
  ReaderOptions opts;
  std::unique_ptr<orc::Reader> reader = createReader(std::move(instream), opts);
  orc::ColumnPrinter* printer;
}
