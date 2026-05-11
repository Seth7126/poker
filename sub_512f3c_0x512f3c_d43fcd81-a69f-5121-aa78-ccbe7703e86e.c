// ============================================================
// 函数名称: sub_512f3c
// 虚拟地址: 0x512f3c
// WARP GUID: d43fcd81-a69f-5121-aa78-ccbe7703e86e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_408e1c, sub_40401c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_511e1c, sub_510e64
// ============================================================

void* __convention("regparm")sub_512f3c(void* arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ecx = sub_403df8(arg3)
    int32_t ecx = sub_403df8(arg3)
    
    if (arg2 != 0)
        ecx = sub_403e4c(arg3, U"0")
    
    void* result = *(arg1 + 0x348)
    
    if (result s> 0)
        int32_t ebx_1 = 1
        void* i
        
        do
            int32_t edi_1 = ebx_1 * 0xe9
            bool o_1 = unimplemented  {imul edi, ebx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(arg1 + (edi_1 << 2) - 0x50) == 1 && *(arg1 + (edi_1 << 2) + 0x185) != 0)
                if (arg2 != 0)
                    return sub_408e1c(ebx_1, arg3)
                
                result = arg3
                sub_40401c(ecx, arg1 + (edi_1 << 2) - 0x3a)
                break
            
            ebx_1 += 1
            i = result
            result -= 1
        while (i != 1)
    
    return result
}
