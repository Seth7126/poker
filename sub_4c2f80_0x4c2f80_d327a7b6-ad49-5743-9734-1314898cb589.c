// ============================================================
// 函数名称: sub_4c2f80
// 虚拟地址: 0x4c2f80
// WARP GUID: d327a7b6-ad49-5743-9734-1314898cb589
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2de8, sub_4c2f1c, sub_403010
// [被调用的父级函数]: sub_4c51e4, sub_4c96bc, sub_5223e8
// ============================================================

void* __convention("regparm")sub_4c2f80(char arg1)
{
    // 第一条实际指令: void* eax = sub_4c2de8(1)
    void* eax = sub_4c2de8(1)
    void* result = eax + 1
    
    if (add_overflow(eax, 1))
        sub_403010()
        noreturn
    
    void* result_1 = result
    int32_t i_2 = *data_5300d0
    
    if (i_2 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            result = sub_4c2f1c(ebx_1)
            
            if (result.b != 0)
                result = ebx_1 * 0x41
                bool o_1 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + (result << 3) + 0x1fea0) != 0)
                    void* result_2 = result_1
                    result_1 -= 1
                    
                    if (add_overflow(result_2, 0xffffffff))
                        sub_403010()
                        noreturn
            
            ebx_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *data_5300d0
    
    if (i_3 s> 0)
        int32_t ebx_2 = 1
        int32_t i_1
        
        do
            result = sub_4c2f1c(ebx_2)
            
            if (result.b != 0)
                result = ebx_2 * 0x41
                bool o_3 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + (result << 3) + 0x1fea0) != 0)
                    *data_53057c = ebx_2
                    __builtin_memcpy(data_5306c0, *data_5301f4 + 0x457c, 0x25cc8)
                    *(*data_5301f4 + (result << 3) + 0x20090) = result_1
                
                if (arg1 == 0)
                    if (*(*data_5301f4 + (result << 3) + 0x1fea0) != 0)
                        *(*data_5301f4 + (result << 3) + 0x200a4) = *(*data_5301f4 + 0x4584)
                    
                    *(*data_5301f4 + (result << 3) + 0x1fea0) = 0
            
            ebx_2 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    return result
}
