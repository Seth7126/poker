// ============================================================
// 函数名称: sub_4a8418
// 虚拟地址: 0x4a8418
// WARP GUID: 0aa4a400-ad40-588d-b12e-c5a4214b074c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a80d4
// [被调用的父级函数]: sub_4a84a7
// ============================================================

int32_t* __convention("regparm")sub_4a8418(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8 = arg2
    
    if (arg3.b != 0)
        var_8 = (*(**data_5308e0 + 0x40))()
    
    return sub_4a80d4(arg1, &var_8, 4, 0)
}
