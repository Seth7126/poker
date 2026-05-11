// ============================================================
// 函数名称: sub_43be08
// 虚拟地址: 0x43be08
// WARP GUID: 563f74ef-2c58-5f38-a88c-a97509958e26
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41dae0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43be08(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x10] == 0)
    if (arg1[0x10] == 0)
        int32_t edx
        edx.b = 1
        arg1[0x10] = sub_41dae0(sub_41799a+0xe2, edx)
    
    (*(*arg1[0x10] + 8))()
    int32_t edx_1
    edx_1.b = 1
    return (*(*arg1 + 0x38))()
}
