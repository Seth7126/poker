// ============================================================
// 函数名称: sub_47c0f0
// 虚拟地址: 0x47c0f0
// WARP GUID: fddc7749-1096-5971-a4b7-f88d92880aee
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_48c214, sub_48c290, sub_482828, sub_48b5c0, sub_484e24, sub_48ad24, sub_488509, sub_48156c, sub_482da8, sub_4822b4
// ============================================================

void __convention("regparm")sub_47c0f0(void* arg1)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    
    if (*(edx + 0x97c) == 0)
        return 
    
    long double x87_r7_2 = fconvert.t(*(edx + 0x978)) * fconvert.t(10f)
    long double temp0_1 = fconvert.t(90f)
    x87_r7_2 - temp0_1
    arg1.w = (x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe
    
    if (not(test_bit(arg1:1.b, 0)))
        (*data_5306b4)(0x43340000, 0, 0x3f800000, 0)
        return 
    
    int32_t var_8_1 = 0
    int32_t var_c_1 = 0
    int32_t var_14
    var_14.q = fconvert.d(fconvert.t(*(edx + 0x978)) / fconvert.t(2f))
    (*data_5306a4)(0, 0, var_14)
}
