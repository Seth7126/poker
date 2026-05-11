// ============================================================
// 函数名称: sub_403204
// 虚拟地址: 0x403204
// WARP GUID: fa501764-04f1-5a0f-a4f5-58a90bb4179f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403164
// ============================================================

void* __convention("regparm")sub_403204(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    while (true)
        int32_t* eax = *(ebx - 0x48)
        
        if (eax != 0)
            int32_t i_1 = *eax
            void* result = &eax[1]
            int32_t i
            
            do
                if (*arg2 == *result && arg2[1] == *(result + 4) && arg2[2] == *(result + 8)
                        && arg2[3] == *(result + 0xc))
                    return result
                
                result += 0x1c
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        void** ebx_1 = *(ebx - 0x24)
        
        if (ebx_1 == 0)
            break
        
        ebx = *ebx_1
    
    return nullptr
}
