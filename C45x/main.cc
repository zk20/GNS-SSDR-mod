
#include "c45_tree.h"
#include "dataSet.h"
#include <iostream>


int main(int argc, char * argv[]) {

    std::string csvName = argv[1];

    std::vector<std::string> classes {"clean", "spoofed"};

    std::vector<std::string> feats  {
                                        "min-dop",
                                        "av-dop",
                                        "var-dop", // sqrt
                                        "min-n.valid-sat",
                                        "av-valid-sat",
                                        "var-valid-sat", // sqrt
                                        "max-n.valid-sat-changed",
                                        "var-n.valid-sat-changed", // sqrt
                                        "min-snr",
                                        "max-snr",
                                        "snr-av",
                                        "var-snr", // sqrt
                                        "min-ps",
                                        "av-ps",
                                        "var-ps", // sqrt
                                        "max-cp",
                                    };

    std::vector<std::string> testFeats  {
                                        "av-dop",
                                        "var-dop", // sqrt
                                        "min-snr",
                                        "max-snr",
                                        "snr-av",
                                        "var-snr", // sqrt
                                        "min-ps",
                                        "max-cp",
                                    };


    C45_tree tree(csvName, feats, classes, 1, 20, 4);


    std::cout << std::endl;
    tree.printInfo();
    tree.saveTree("out_2.tree");

    std::cout << std::endl << "done" << std::endl << std::endl;
}
