// ============================================================
// 函数名称: sub_45ce40
// 虚拟地址: 0x45ce40
// WARP GUID: 551b57d9-ae31-5bfe-b3ae-2d4243604b99
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45d134
// ============================================================

int32_t* __thiscallsub_45ce40(int32_t* arg1, void* arg2 @ eax, int32_t* arg3)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    void** var_10 = *arg3
    int32_t* result = arg1
    
    while (*(arg2 + 0x12a) s> i)
        char* esi_1 = *result
        void* j = *var_10
        
        for (void* edi_2 = *(arg2 + 0x6c) + j; edi_2 u> j; j += 2)
            void* ecx
            ecx.b = *esi_1
            esi_1 = &esi_1[1]
            *j = ecx.b
            *(j + 1) = ecx.b
        
        i += 1
        var_10 = &var_10[1]
        result = &result[1]
    
    return result
}
