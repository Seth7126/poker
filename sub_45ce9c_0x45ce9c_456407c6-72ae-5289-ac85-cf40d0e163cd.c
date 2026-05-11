// ============================================================
// 函数名称: sub_45ce9c
// 虚拟地址: 0x45ce9c
// WARP GUID: 456407c6-72ae-5289-ac85-cf40d0e163cd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46026c
// [被调用的父级函数]: sub_45d134
// ============================================================

int32_t* __thiscallsub_45ce9c(void* arg1, void* arg2 @ eax, int32_t* arg3)
{
    // 第一条实际指令: void* edx = *arg3
    void* edx = *arg3
    int32_t i = 0
    int32_t* result = arg1
    void** var_18 = edx
    int32_t* result_1 = result
    
    while (*(arg2 + 0x12a) s> i)
        void* j = *var_18
        void* esi_2 = *(arg2 + 0x6c) + j
        char* ecx_1 = *result_1
        
        for (; esi_2 u> j; j += 2)
            void* edx_3
            edx_3.b = *ecx_1
            ecx_1 = &ecx_1[1]
            *j = edx_3.b
            *(j + 1) = edx_3.b
        
        result = sub_46026c(edx, i, edx, *(arg2 + 0x6c), 1, i + 1)
        result_1 = &result_1[1]
        i += 2
        var_18 = &var_18[2]
    
    return result
}
