// ============================================================
// 函数名称: sub_4b5a34
// 虚拟地址: 0x4b5a34
// WARP GUID: fb4cc618-dfd3-55ca-87f8-344391866bd6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409180, sub_404078, sub_4043ac, sub_403e4c, sub_40423c
// [被调用的父级函数]: sub_4b5b54
// ============================================================

int32_t __convention("regparm")sub_4b5a34(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_403e4c(arg2, arg1)
    sub_403e4c(arg2, arg1)
    void* esi_1 = sub_409180(*arg2)
    
    while (true)
        int32_t result = sub_404078(*arg2)
        
        if (result s<= 0)
            return result
        
        result.b = *esi_1
        char temp0_1 = result.b
        result.b -= 0x21
        
        if (temp0_1 u>= 0x21)
            char temp1_1 = result.b
            result.b -= 0xd
            
            if (temp1_1 != 0xd)
                return result
        
        sub_4043ac(arg2, esi_1 - sub_40423c(*arg2))
        esi_1 = sub_409180(*arg2)
}
