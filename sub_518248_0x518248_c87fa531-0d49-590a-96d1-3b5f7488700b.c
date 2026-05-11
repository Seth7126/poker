// ============================================================
// 函数名称: sub_518248
// 虚拟地址: 0x518248
// WARP GUID: c87fa531-0d49-590a-96d1-3b5f7488700b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4ee958
// ============================================================

int32_t __convention("regparm")sub_518248(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    void var_328
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_328, arg1, 0x318)
    *edi = *esi_1
    int32_t result = 0
    int16_t i_2
    int32_t i_1 = sx.d(i_2)
    
    if (i_1 s> 0)
        void* eax = &var_328
        int32_t i
        
        do
            ebx.b = *eax
            
            if (ebx.b == arg2.b)
                ebx.b = *(eax + 1)
                
                if (ebx.b == arg2:1.b)
                    ebx.w = *(eax + 2)
                    
                    if (ebx.w == arg2:2.w)
                        result.b = 1
            
            eax += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
