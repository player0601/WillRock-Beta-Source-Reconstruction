struct scnSCENE {

    objOBJ* rootObject;       // 0x44 -> set from sioReadObj()
    cdtCOLL_SCN* collision;   // 0x50 -> set from sioReadColl() / sioReadColl_OLD()
    int numSelections;        // 0x78 -> passed to sioReadNamedSelList
    selSEL* selectionList;    // 0x7C -> passed to sioReadNamedSelList
    psSHEET propertySheet;    // 0x80 -> set from sioReadPSheet
    camCAMERA* camera;        // 0x84 -> set from sioReadCamera()
};
