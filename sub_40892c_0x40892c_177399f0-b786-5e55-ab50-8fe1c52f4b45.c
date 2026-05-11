// ============================================================
// 函数名称: sub_40892c
// 虚拟地址: 0x40892c
// WARP GUID: 177399f0-b786-5e55-ab50-8fe1c52f4b45
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4043ac, sub_404078
// [被调用的父级函数]: sub_4afaf8, sub_475d3c
// ============================================================

int32_t __convention("regparm")sub_40892c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t i = sub_404078(arg1)
    int32_t i = sub_404078(arg1)
    char result = sub_4043ac(arg2, i)
    void* edx_1 = arg1
    char* esi_1 = *arg2
    
    for (; i != 0; i -= 1)
        result = *edx_1
        
        if (result u>= 0x41 && result u<= 0x5a)
            result += 0x20
        
        *esi_1 = result
        edx_1 += 1
        esi_1 = &esi_1[1]
    
    return result
}
