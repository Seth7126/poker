// ============================================================
// 函数名称: sub_511b0c
// 虚拟地址: 0x511b0c
// WARP GUID: f29a0905-f858-5446-9d6e-b05eb6ff582d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_518820, sub_5223e8
// ============================================================

int32_t __convention("regparm")sub_511b0c(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i_1 = *(arg1 + 0x348)
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul ecx, esi, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t ecx_1
            ecx_1.b = *(arg1 + esi_1 * 0x3a4 - 0x50)
            char temp0_1 = ecx_1.b
            ecx_1.b -= 3
            char temp2_1
            
            if (temp0_1 u>= 3)
                temp2_1 = ecx_1.b
                ecx_1.b -= 1
            
            if (temp0_1 u< 3 || temp2_1 == 1)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
