// ============================================================
// 函数名称: sub_405ae8
// 虚拟地址: 0x405ae8
// WARP GUID: fe7728e4-a6ef-59a7-a7ff-7610f2cbb528
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadStringA
// [内部子函数调用]: sub_403ee0, sub_4055a0, sub_403fb0
// [被调用的父级函数]: sub_4aa7cb, sub_409e74, sub_42b260, sub_4a9330, sub_4a84a7, sub_42eac0, sub_49af78, sub_40b774, sub_454740, sub_4af7a3, sub_4374b4, sub_4a6afb, sub_40bbb4, sub_40b5a8, sub_49be64, sub_444722, sub_4104b0, sub_445ad4, sub_4afaf8, sub_44c778, sub_4117ac, sub_4a80d4, sub_4a8f18, sub_4b6b04, sub_4ab7f4, sub_4a8b38, sub_4b6a9c, sub_4a0968, sub_43709c, sub_49adfc, sub_4abbb0, sub_4a689d, sub_4a597c, sub_434a1c, sub_437af8, sub_4a79a0, sub_409c9c, sub_49cfe0, sub_4a654c, sub_49c50c, sub_40ad30, sub_4ab120, sub_4b6c13, sub_4a76d4, sub_419e3c, sub_40b454, sub_4a87f8, sub_443d2c, sub_41b494, sub_4ab3e8, sub_42551c, sub_4a8c14, sub_4a8878, sub_49a7e8, sub_49c724, sub_412f00, sub_49fdd0, sub_4448d8, sub_40880c, sub_42ba70, sub_4b6c70, sub_442414, sub_4ab4f8, sub_437328, sub_44630c, sub_49dd18, sub_4b5a84, sub_440f08, sub_403b60, sub_443220, sub_49a8c8, sub_425418, sub_4a6308, sub_49c794, sub_40b90c, sub_40b56c, sub_424ac0, sub_425374, sub_4a72e4, sub_4a93b0, sub_4a3b70, sub_408781, sub_4b2abc, sub_4a82e4, sub_4481cc, sub_466a2c, sub_49c840, sub_4b526c, sub_4abda8, sub_4463a4, sub_4af7b0, sub_40faf0, sub_49b963, sub_4534e4, sub_49ffc4, sub_4a2e48, sub_4255a0, sub_4547e0, sub_40bad8, sub_4a3d84, sub_41b3fc, sub_4a8ea2, sub_493b3c, sub_44bb04
// ============================================================

void __convention("regparm")sub_405ae8(char** arg1, char** arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    void var_408
    void* esp = &var_408
    int32_t* ebx_1 = arg1
    
    if (ebx_1 != 0)
        int32_t ecx
        
        if (ebx_1[1] s>= 0x10000)
            sub_403fb0(ecx, ebx_1[1])
        else
            int32_t cchBufferMax = 0x400
            void* lpBuffer = &var_408
            uint32_t uID = ebx_1[1]
            HINSTANCE hInstance = sub_4055a0(**ebx_1)
            esp = &hInstance
            sub_403ee0(arg2, &hInstance, LoadStringA(hInstance, uID, lpBuffer, cchBufferMax))
    
    *(esp + 0x400)
    *(esp + 0x404)
}
