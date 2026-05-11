// ============================================================
// 函数名称: sub_43ba84
// 虚拟地址: 0x43ba84
// WARP GUID: d622ba38-650c-5760-a332-8aba54a80a35
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b974, sub_43b964
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_43ba84(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: char ebx = arg2.b
    char ebx = arg2.b
    
    if (ebx == *(arg1 + 0x2e))
        return 
    
    if (ebx != 0 && arg1[0x16] != 0)
        int32_t i_2
        i_2, arg2 = sub_43b964(arg1[0x16])
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t esi_1 = 0
            int32_t i
            
            do
                if (*(sub_43b974(arg1[0x16], esi_1) + 0x2e) != 0)
                    *(sub_43b974(arg1[0x16], esi_1) + 0x2e) = 0
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    *(arg1 + 0x2e) = ebx
    arg2.b = 1
    (*(*arg1 + 0x38))()
}
