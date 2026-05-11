// ============================================================
// 函数名称: sub_41512c
// 虚拟地址: 0x41512c
// WARP GUID: 98d0c37e-5053-5139-b2cb-c47c57ddc90f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404248, sub_413a6c, sub_403ee0
// [被调用的父级函数]: sub_41504c, sub_413b08, sub_41464c, sub_415520, sub_413f0c, sub_415370, sub_414da8, sub_4154d8, sub_415224
// ============================================================

int32_t __convention("regparm")sub_41512c(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    sub_413a6c(arg1, &var_c, 1)
    int32_t ecx
    ecx.b = var_c.b
    sub_403ee0(arg2, 0, ecx)
    void* eax_3 = sub_404248(arg2)
    int32_t ecx_1
    ecx_1.b = var_c.b
    return sub_413a6c(arg1, eax_3, ecx_1)
}
