// ============================================================
// 函数名称: sub_423ba4
// 虚拟地址: 0x423ba4
// WARP GUID: aeea12f3-ee1c-57f4-a664-66c68aeb9041
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC, GetDC
// [内部子函数调用]: sub_4032ac, sub_419bc0, sub_4288c4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_423ba4(int32_t* arg1)
{
    // 第一条实际指令: if ((arg1[8].b & 2) != 0 || *(arg1 + 0x12d) == 0)
    if ((arg1[8].b & 2) != 0 || *(arg1 + 0x12d) == 0)
        return 
    
    (*(*arg1 + 0x40))()
    HDC hDC = GetDC(nullptr)
    sub_419bc0(arg1[0x48], hDC)
    int32_t eax_2
    eax_2.b = *(arg1 + 0x12f)
    int32_t ebx
    ebx.w = 0xffcc
    void var_1c
    sub_4032ac(arg1, &var_1c, zx.d(*((eax_2 << 1) + &data_52e690)) | 0x440)
    sub_419bc0(arg1[0x48], 0)
    ReleaseDC(nullptr, hDC)
    arg1[0xc]
    char var_20 = arg1[0x4b].b
    ebx.w = 0xffce
    
    if (sub_4032ac(arg1) != 0)
        sub_4288c4(&var_20)
    
    if (var_20 == 1)
        arg1[0xe]
    
    arg1[0xd]
    int32_t var_14
    int32_t var_10
    (*(*arg1 + 0x7c))(var_10, var_14)
}
