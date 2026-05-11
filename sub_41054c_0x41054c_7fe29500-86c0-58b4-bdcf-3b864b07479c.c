// ============================================================
// 函数名称: sub_41054c
// 虚拟地址: 0x41054c
// WARP GUID: 7fe29500-86c0-58b4-bdcf-3b864b07479c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4106dc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41054c(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx_1 = arg1[3]
    int32_t edx_1 = arg1[3]
    int32_t ecx_1
    
    if (edx_1 s> 0x40)
        int32_t ecx = edx_1
        
        if (ecx s< 0)
            ecx += 3
        
        ecx_1 = ecx s>> 2
    else if (edx_1 s<= 8)
        ecx_1 = 4
    else
        ecx_1 = 0x10
    
    return sub_4106dc(arg1, ecx_1 + edx_1)
}
