#include "data_storage_provider.h"
namespace SDFnodes
{
static void C1()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    in_C.pop(in_1);
    double in_2;
    in_C.pop(in_2);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    c1.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void A1()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    in_A.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    a1.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void B1()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    in_B.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    b1.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void B2()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    b1.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    b2.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void B3()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    b2.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    b3.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void C2()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    c1.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    c2.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void C3()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    c2.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    c3.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void A2()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    a1.pop(in_1);
    double in_2;
    a1.pop(in_2);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    a2.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void A3()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    a2.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    a3.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void C4()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    c3.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    c4.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void A4()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    a3.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    a4.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void B4()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    b3.pop(in_1);
    double in_2;
    b3.pop(in_2);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    b4.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

static void M()
{
    // %Tag(DATA_STORAGE_PROVIDER_RD)%
    double in_1;
    a4.pop(in_1);
    double in_1;
    b4.pop(in_1);
    double in_1;
    c4.pop(in_1);
    // %EndTag(DATA_STORAGE_PROVIDER_RD)%

    //User: Tell me what to do with this data!!

    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    double out_1 = 0.0; 	 //User action needed
    out.push(out_1);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%
}

}
