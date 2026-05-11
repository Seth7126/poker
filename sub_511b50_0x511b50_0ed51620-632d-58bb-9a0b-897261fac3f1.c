// ============================================================
// 函数名称: sub_511b50
// 虚拟地址: 0x511b50
// WARP GUID: 0ed51620-632d-58bb-9a0b-897261fac3f1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_511e08, sub_512d1c, sub_403010
// [被调用的父级函数]: sub_511fd8
// ============================================================

int32_t __convention("regparm")sub_511b50(void* arg1)
{
    // 第一条实际指令: bool var_5 = false
    bool var_5 = false
    
    if (sub_511e08(arg1) == 1)
        int32_t var_c_1 = 0
        int32_t i_1 = *(arg1 + 0x348)
        
        if (i_1 s> 0)
            int32_t edi_1 = 1
            int32_t i
            
            do
                if (*(arg1 + 0x54) != 2)
                    bool o_2 = unimplemented  {imul eax, edi, 0xe9}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + edi_1 * 0x3a4 - 0x50) == 1)
                        int32_t temp3_1 = var_c_1
                        var_c_1 += 1
                        
                        if (add_overflow(temp3_1, 1))
                            sub_403010()
                            noreturn
                else if (sub_512d1c(arg1, edi_1, 0).b != 0)
                    int32_t temp2_1 = var_c_1
                    var_c_1 += 1
                    
                    if (add_overflow(temp2_1, 1))
                        sub_403010()
                        noreturn
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (*(arg1 + 0x54) != 2)
            var_5 = var_c_1 == *(arg1 + 0x34c)
        else
            var_5 = var_c_1 == 1
    
    int32_t result
    result.b = var_5
    return result
}
