// ============================================================
// 函数名称: sub_40b250
// 虚拟地址: 0x40b250
// WARP GUID: e429ff40-cf79-5bfc-b380-68840ed78af7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadStringA, VirtualQuery, GetModuleFileNameA
// [内部子函数调用]: sub_409aac, sub_403248, sub_409440, sub_4055a0, sub_4093b0, sub_40423c, sub_40b244, sub_40c1f0, sub_40301c
// [被调用的父级函数]: sub_40b3d8
// ============================================================

int32_t __fastcallsub_40b250(char* arg1, int32_t arg2, int32_t* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: MEMORY_BASIC_INFORMATION buffer
    MEMORY_BASIC_INFORMATION buffer
    VirtualQuery(arg2, &buffer, 0x1c)
    void* var_c
    int32_t ecx
    uint8_t filename[0x105]
    
    if (buffer.State != 0x1000)
        ecx = GetModuleFileNameA(data_5314dc, &filename, 0x105)
        var_c = sub_40b244(arg2)
    else
        uint32_t eax_1
        eax_1, ecx = GetModuleFileNameA(buffer.AllocationBase, &filename, 0x105)
        
        if (eax_1 != 0)
            var_c = arg2 - buffer.AllocationBase
        else
            ecx = GetModuleFileNameA(data_5314dc, &filename, 0x105)
            var_c = sub_40b244(arg2)
    void var_111
    sub_409440(&var_111, sub_40c1f0(ecx, 0x5c) + 1, 0x104)
    void* const ebx_2 = &data_40b3d0
    void* const edi = &data_40b3d0
    
    if (sub_403248(arg3, 0x407d24) != 0)
        ebx_2 = sub_40423c(arg3[1])
        int32_t eax_12 = sub_4093b0(ebx_2)
        
        if (eax_12 != 0 && *(ebx_2 + eax_12 - 1) != 0x2e)
            edi = &data_40b3d4
    
    char buffer_1[0x100]
    LoadStringA(sub_4055a0(data_5314dc), *(data_5309f4 + 4), &buffer_1, 0x100)
    void var_45c
    sub_40301c(*arg3, &var_45c)
    void* var_35c = &var_45c
    char var_358 = 4
    void* var_354 = &var_111
    char var_350 = 6
    void* var_34c = var_c
    char var_348 = 5
    void* const var_344 = ebx_2
    char var_340 = 6
    void* const var_33c = edi
    char var_338 = 6
    sub_409aac(&buffer_1, arg4, arg1, 4, &var_35c)
    return sub_4093b0(arg1)
}
