// ============================================================
// 函数名称: sub_5044a0
// 虚拟地址: 0x5044a0
// WARP GUID: 39c75c50-c20a-5594-aa3b-6dec5661c572
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51c744, sub_403010
// [被调用的父级函数]: sub_50003c, sub_5047f4
// ============================================================

int32_t __fastcallsub_5044a0(char arg1, int32_t arg2, int32_t arg3 @ eax, void** arg4)
{
    // 第一条实际指令: if (arg2 s<= 0)
    if (arg2 s<= 0)
        arg4[0x17].b = 0
        arg4[0x34] = 0
        arg4[0x32] = 0
        arg4[0x2d] = 0
        arg4[0x2e] = 0
    else if (arg3 s>= 0)
        bool o_4 = unimplemented  {imul eax, esi, 0x2345}
        
        if (o_4)
            sub_403010()
            noreturn
        
        bool o_5 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_5)
            sub_403010()
            noreturn
        
        __builtin_memcpy(arg4, data_5301b0 + arg3 * 0x8d14 + arg2 * 0xd4 - 0x8de8, 0xd4)
    else
        if (neg.d(arg3) == 0x80000000)
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul eax, eax, 0x2345}
        
        if (o_2)
            sub_403010()
            noreturn
        
        bool o_3 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_3)
            sub_403010()
            noreturn
        
        __builtin_memcpy(arg4, data_5302e4 + neg.d(arg3) * 0x8d14 + arg2 * 0xd4 - 0x8de8, 0xd4)
    
    int32_t result = *data_5301f4
    
    if (*(result + 0x4580) != 0 && (arg3 == 0xfffffff4 || arg3 == 0xc))
        int32_t eax_7 = arg4[0x14]
        int32_t var_10_1 = arg4[0x15]
        int32_t eax_8
        eax_8.b = arg1
        float var_68[0x16]
        result = sub_51c744(var_10_1, eax_7, *data_52ffd0, &var_68, eax_8.b, arg2.w)
        __builtin_memcpy(&arg4[1], &var_68, 0x58)
        
        if (eax_7 s<= 0 || var_10_1 s<= 0)
            *arg4 = nullptr
        else
            bool o_6 = unimplemented  {imul eax, dword [ebp-0x8], 0x41}
            
            if (o_6)
                sub_403010()
                noreturn
            
            result = *(*data_52ffd0 + eax_7 * 0x104 + (var_10_1 << 2) - 0x104)
            *arg4 = result
    
    if (arg3 s> 0 && arg2 s> 0)
        int32_t eax_13 = arg3 * 0x2345
        bool o_7 = unimplemented  {imul eax, esi, 0x2345}
        
        if (o_7)
            sub_403010()
            noreturn
        
        bool o_8 = unimplemented  {imul ecx, edi, 0x35}
        
        if (o_8)
            sub_403010()
            noreturn
        
        arg4[0x29] = *(data_5301b0 + (eax_13 << 2) + arg2 * 0xd4 - 0x8d44)
        bool o_9 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_9)
            sub_403010()
            noreturn
        
        result = *(data_5301b0 + (eax_13 << 2) + arg2 * 0xd4 - 0x8d40)
        arg4[0x2a] = result
    
    return result
}
