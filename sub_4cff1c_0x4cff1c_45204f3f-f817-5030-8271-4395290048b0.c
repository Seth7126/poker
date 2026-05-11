// ============================================================
// 函数名称: sub_4cff1c
// 虚拟地址: 0x4cff1c
// WARP GUID: 45204f3f-f817-5030-8271-4395290048b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4d4f84, sub_4d5577, sub_4d00b8
// ============================================================

int32_t __convention("regparm")sub_4cff1c(int32_t arg1)
{
    // 第一条实际指令: char var_58
    char var_58
    __builtin_memcpy(&var_58, arg1, 0x50)
    int32_t var_4c
    int32_t result
    int32_t var_54
    char var_48
    
    if (var_4c == 9 || var_4c == 0xa || var_58 == 4)
        if (var_54 != 0x20 && var_54 != 0x41)
            int32_t edx_8
            edx_8.b = var_48
            bool o_8 = unimplemented  {imul edx, edx, 0xd4f}
            
            if (o_8)
                sub_403010()
                noreturn
            
            bool o_9 = unimplemented  {imul ecx, dword [esp+0xc], 0x2e9c}
            
            if (o_9)
                sub_403010()
                noreturn
            
            int32_t edx_10 = *(var_4c * 0x174e0 + &data_532f70 + edx_8 * 0x353c - 0x14010)
            
            if (add_overflow(edx_10, 0xffffffff))
                sub_403010()
                noreturn
            
            if (add_overflow(var_54, 1))
                sub_403010()
                noreturn
            
            if (edx_10 - 1 s>= var_54 + 1)
                int32_t edx_12
                edx_12.b = var_48
                bool o_12 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                bool o_13 = unimplemented  {imul ecx, dword [esp+0xc], 0x2e9c}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                bool o_14 = unimplemented  {imul eax, eax, 0xa}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                result.b =
                    *(var_4c * 0x174e0 + &data_532f70 + edx_12 * 0x353c + var_54 * 0x50 - 0x17478)
                
                if (result.b != 0)
                    result.b -= 2
                    char temp13_1 = result.b
                    result.b -= 2
                    
                    if (temp13_1 u>= 2)
                        return 0
        
        result.b = 1
    else
        if (var_54 != 0x41 && var_54 != 0x83)
            int32_t edx_1
            edx_1.b = var_48
            bool o_1 = unimplemented  {imul edx, edx, 0xd4f}
            
            if (o_1)
                sub_403010()
                noreturn
            
            bool o_2 = unimplemented  {imul ecx, dword [esp+0xc], 0x2e9c}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t edx_3 = *(var_4c * 0x174e0 + &data_532f70 + edx_1 * 0x353c - 0x14010)
            
            if (add_overflow(edx_3, 0xffffffff))
                sub_403010()
                noreturn
            
            if (add_overflow(var_54, 1))
                sub_403010()
                noreturn
            
            if (edx_3 - 1 s>= var_54 + 1)
                int32_t edx_5
                edx_5.b = var_48
                bool o_5 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                bool o_6 = unimplemented  {imul ecx, dword [esp+0xc], 0x2e9c}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                bool o_7 = unimplemented  {imul eax, eax, 0xa}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                result.b = *(var_4c * 0x174e0 + &data_532f70 + edx_5 * 0x353c + var_54 * 0x50 - 0x17478)
                
                if (result.b != 0)
                    result.b -= 2
                    char temp15_1 = result.b
                    result.b -= 2
                    
                    if (temp15_1 u>= 2)
                        return 0
        
        result.b = 1
    return result
}
