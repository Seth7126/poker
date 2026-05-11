// ============================================================
// 函数名称: sub_423f2c
// 虚拟地址: 0x423f2c
// WARP GUID: 513703c5-bf52-509b-b8d0-fdcac57fade4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_424524, sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_423f2c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == arg1[0x7d].b)
    if (arg2 == arg1[0x7d].b)
        return 
    
    arg1[0x7d].b = arg2
    sub_424524(arg1)
    sub_42ee80(arg1)
}
