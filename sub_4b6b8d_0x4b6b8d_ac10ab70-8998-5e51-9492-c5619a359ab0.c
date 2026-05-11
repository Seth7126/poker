// ============================================================
// 函数名称: sub_4b6b8d
// 虚拟地址: 0x4b6b8d
// WARP GUID: ac10ab70-8998-5e51-9492-c5619a359ab0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_416764, sub_4b5c08, sub_405b74, sub_405b40
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4b6b8d(char* arg1, void* arg2, int16_t arg3)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x327bf809] += arg1.b
    *(arg2 - 0x54f3d000) += arg3:1.b
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = arg2
    arg2.b = 1
    int32_t* eax = sub_416764(ecx, arg2, &data_40f5ec, 0)
    
    if (eax != 0)
        eax -= 0xffffffec
    
    sub_405b74(&var_8, *(arg1 + 0x20), 0x4b6c14)
    int32_t* eax_2 = var_8
    sub_4b5c08((*(*eax_2 + 0x18))(eax_2, eax, 0xffffffff))
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4b6c0e
    int32_t* result = &var_8
    sub_405b40(result)
    return result
}
