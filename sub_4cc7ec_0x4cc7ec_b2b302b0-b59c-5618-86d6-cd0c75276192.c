// ============================================================
// 函数名称: sub_4cc7ec
// 虚拟地址: 0x4cc7ec
// WARP GUID: b2b302b0-b59c-5618-86d6-cd0c75276192
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4cd400, sub_4cd498, sub_4bf070
// ============================================================

int32_t __convention("regparm")sub_4cc7ec(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4_1 = ecx
    int32_t var_4 = arg1
    arg1.b = var_4.b
    bool o = unimplemented  {imul edx, edx, 0x7}
    
    if (not(o))
        return *(data_530594 + sx.d(var_4:1.b) * 0x38 + (sx.d(arg1.b) << 2) - 0x3c)
    
    sub_403010()
    noreturn
}
