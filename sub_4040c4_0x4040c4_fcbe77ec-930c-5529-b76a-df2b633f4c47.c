// ============================================================
// 函数名称: sub_4040c4
// 虚拟地址: 0x4040c4
// WARP GUID: fcbe77ec-930c-5529-b76a-df2b633f4c47
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_403ebc, sub_403e4c, sub_404080
// [被调用的父级函数]: sub_43b5b8, sub_468ec0, sub_4b44d0, sub_4d7b54, sub_490ef8, sub_46db80, sub_47b650, sub_468eb7, sub_514cc4, sub_490f66, sub_508414, sub_4e649b, sub_4dd1d7, sub_5223e8, sub_4ae168, sub_51d580, sub_51621b, sub_508998, sub_525ab8, sub_4ee360, sub_4b4488, sub_47be18, sub_497bcc, sub_4748fc, sub_4ed16c, sub_46dce0, sub_520efc, sub_510ba4, sub_52070c, sub_50e368, sub_50e22c, sub_4e548c, sub_4adcfc, sub_52c7c8, sub_50dbd4, sub_50a240, sub_484e24, sub_51300c, sub_49cfe0, sub_52b2f0, sub_4dd164, sub_520a04, sub_468af3, sub_4dad04, sub_514ef8, sub_4248b0, sub_48be98, sub_4c62e8, sub_52b8e8, sub_48c290, sub_5207dc, sub_524d14, sub_4d954c, sub_4807f4, sub_4cca24, sub_4cda5c, sub_50a64c, sub_47d208, sub_4d951f, sub_4afa30, sub_4d9378, sub_50e8e4, sub_4ec560, sub_4e6659, sub_50b624, sub_4c96bc, sub_439258, sub_50f7b8, sub_49cb30, sub_4a8450, sub_4692db, sub_52452c, sub_4a0cf7, sub_4a8988, sub_4e6028, sub_4aa582, sub_52ba68, sub_4d88f8, sub_4cbd28, sub_519804, sub_4692e4, sub_50d7cc, sub_5205d0, sub_46d884, sub_515920, sub_4c8aa0, sub_468afc, sub_50f700, sub_4dd1e0, sub_5197fb, sub_515de8, sub_520a94, sub_4d8208, sub_46f698, sub_46f000, sub_488509, sub_4fc834
// ============================================================

int32_t __convention("regparm")sub_4040c4(int32_t* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return sub_403e4c(arg1, arg3) __tailcall
    
    if (arg3 == 0)
        return sub_403e4c(arg1, arg2) __tailcall
    
    if (arg2 == *arg1)
        return sub_404080(arg1, arg3) __tailcall
    
    if (arg3 != *arg1)
        sub_403e4c(arg1, arg2)
        return sub_404080(arg1, arg3) __tailcall
    
    char* eax_5 = sub_403ebc(*(arg2 - 4) + *(arg3 - 4))
    sub_402980(arg2, eax_5, *(arg2 - 4))
    sub_402980(arg3, &eax_5[*(arg2 - 4)], *(arg3 - 4))
    
    if (eax_5 != 0)
        *(eax_5 - 8) -= 1
    
    return sub_403e4c(arg1, eax_5)
}
