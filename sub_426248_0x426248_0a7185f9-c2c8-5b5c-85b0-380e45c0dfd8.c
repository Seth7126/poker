// ============================================================
// 函数名称: sub_426248
// 虚拟地址: 0x426248
// WARP GUID: 0a7185f9-c2c8-5b5c-85b0-380e45c0dfd8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos
// [内部子函数调用]: sub_407814, sub_42b31c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_426248(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_1c = 0x201
    int32_t var_1c = 0x201
    void point
    GetCursorPos(&point)
    void var_c
    sub_42b31c(arg1, &point, &var_c)
    int32_t var_14 = sub_407814(&var_c)
    int32_t var_18 = 0
    int32_t var_10 = 0
    (*(*arg1 - 0x10))()
    int32_t var_1c_1 = 0x202
    return (*(*arg1 - 0x10))()
}
