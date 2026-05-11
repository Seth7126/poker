// ============================================================
// 函数名称: sub_42b31c
// 虚拟地址: 0x42b31c
// WARP GUID: e57174f5-ccee-51d6-b6f9-e61ff386b0d1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43101c, sub_4298b4, sub_43550c, sub_426248, sub_42fd68, sub_42d734, sub_4328bc, sub_42c1fc, sub_44a0a0, sub_42f268, sub_42bdf4, sub_42a1dc, sub_441ed4
// ============================================================

int32_t __convention("regparm")sub_42b31c(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: (*(*arg1 + 0x3c))()
    (*(*arg1 + 0x3c))()
    int32_t var_14
    *arg3 = *arg2 - var_14
    int32_t var_10
    int32_t result = arg2[1] - var_10
    arg3[1] = result
    return result
}
