// ============================================================
// 函数名称: sub_50d318
// 虚拟地址: 0x50d318
// WARP GUID: faa47d42-e546-5312-9080-44f9953b8e18
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50d2f4, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_5127fc, sub_50c5e0, sub_514ef8, sub_511fd8, sub_527454, sub_527230, sub_5091bc, sub_50b1ac, sub_509a28, sub_5079c3, sub_50928c, sub_508998, sub_5079cc, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_50d318(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = *(*data_530454 + 0x344)
    
    if (result.b == 0 && *(arg1 + 0x345) != 0 && sub_50d2f4() != 0)
        int32_t eax_4 = 1
        
        while (true)
            if (eax_4 s< 8)
                bool o_2 = unimplemented  {imul edx, eax, 0xe9}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                if (*(*data_530454 + eax_4 * 0x3a4 - 0x50) != 1 && eax_4 != *(*data_530454 + 0x350))
                    int32_t temp0_1 = eax_4
                    eax_4 += 1
                    
                    if (not(add_overflow(temp0_1, 1)))
                        continue
                    
                    sub_403010()
                    noreturn
            
            result.b = eax_4 == *(*data_530454 + 0x350)
            break
    
    return result
}
