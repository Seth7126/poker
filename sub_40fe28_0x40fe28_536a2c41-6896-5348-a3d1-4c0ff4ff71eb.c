// ============================================================
// 函数名称: sub_40fe28
// 虚拟地址: 0x40fe28
// WARP GUID: 536a2c41-6896-5348-a3d1-4c0ff4ff71eb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualQuery
// [内部子函数调用]: sub_410948, sub_410524, sub_410414, sub_4108e4
// [被调用的父级函数]: sub_416cb4, sub_416cac
// ============================================================

int32_t __convention("regparm")sub_40fe28(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t* eax_1 = sub_4108e4(data_531624)
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = eax_1[2] - 1
    MEMORY_BASIC_INFORMATION buffer
    
    if (i s>= 0)
        do
            VirtualQuery(sub_410524(eax_1, i), &buffer, 0x1c)
            
            if (arg1 == 0 || arg1 == buffer.AllocationBase)
                sub_410414(eax_1, i)
            
            i -= 1
        while (i != 0xffffffff)
    
    int32_t i_1 = (*(*data_531628 + 0x14))() - 1
    
    if (i_1 s>= 0)
        do
            buffer.Protect = 0x1c
            buffer.State = &buffer
            buffer.RegionSize = (*(*data_531628 + 0x18))(buffer.State, buffer.Protect)
            VirtualQuery(buffer.RegionSize)
            
            if (arg1 == 0 || arg1 == buffer.AllocationBase)
                (*(*data_531628 + 0x44))()
            
            i_1 -= 1
        while (i_1 != 0xffffffff)
    
    fsbase->NtTib.ExceptionList = buffer.Type
    __return_addr = sub_40fee7
    return sub_410948(data_531624)
}
