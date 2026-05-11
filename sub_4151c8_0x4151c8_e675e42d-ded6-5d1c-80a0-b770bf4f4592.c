// ============================================================
// 函数名称: sub_4151c8
// 虚拟地址: 0x4151c8
// WARP GUID: e675e42d-ded6-5d1c-80a0-b770bf4f4592
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413600, sub_413a6c, sub_415210, sub_404624
// [被调用的父级函数]: sub_4148a8
// ============================================================

int32_t __convention("regparm")sub_4151c8(void* arg1, int32_t* arg2, BSTR arg3)
{
    // 第一条实际指令: BSTR var_c = arg3
    BSTR var_c = arg3
    var_c = nullptr
    
    if (sub_415210(arg3) != 0x12)
        sub_413600()
        noreturn
    
    sub_413a6c(arg1, &var_c, 4)
    sub_404624(arg2, var_c)
    return sub_413a6c(arg1, *arg2, var_c * 2)
}
