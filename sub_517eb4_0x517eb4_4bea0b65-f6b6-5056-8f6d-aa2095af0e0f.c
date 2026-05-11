// ============================================================
// 函数名称: sub_517eb4
// 虚拟地址: 0x517eb4
// WARP GUID: 4bea0b65-f6b6-5056-8f6d-aa2095af0e0f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4bf070
// ============================================================

int32_t __convention("regparm")sub_517eb4(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i_1 = sx.d(*(arg1 + 0x100))
    
    if (i_1 s> 0)
        int32_t i
        
        do
            if (arg2 == *arg1)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
            
            arg1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
