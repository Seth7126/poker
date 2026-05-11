// ============================================================
// 函数名称: sub_45a2fc
// 虚拟地址: 0x45a2fc
// WARP GUID: 47363545-e213-5dcd-a965-e4ff06ff3443
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45a09c, sub_459ccc, sub_45a1b8
// [被调用的父级函数]: sub_45ac8c
// ============================================================

int32_t __convention("regparm")sub_45a2fc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax_1 = (*arg1[1])()
    int32_t* eax_1 = (*arg1[1])()
    *eax_1 = 0
    eax_1[1] = 0x1f
    eax_1[2] = 0
    eax_1[3] = 0x3f
    eax_1[4] = 0
    eax_1[5] = 0x1f
    sub_459ccc(arg1, eax_1)
    int32_t eax_4 = sub_45a09c(1, eax_1, arg1, arg2)
    int32_t ebx_1 = 0
    
    if (eax_4 s> 0)
        do
            sub_45a1b8(arg1, &eax_1[ebx_1 * 8], ebx_1)
            ebx_1 += 1
        while (eax_4 s> ebx_1)
    
    arg1[0x20] = eax_4
    void* eax_6 = *arg1
    *(eax_6 + 0x14) = 0x5f
    *(eax_6 + 0x18) = eax_4
    return (*(*arg1 + 4))()
}
