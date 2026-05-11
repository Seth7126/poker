// ============================================================
// 函数名称: sub_42e30c
// 虚拟地址: 0x42e30c
// WARP GUID: a0b5da9a-3d3f-5878-a9bf-e7ab9bb1e171
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431bcc, sub_42e3a0, sub_42e3a8
// [被调用的父级函数]: sub_42ac88, sub_42e3c8, sub_42e6ac
// ============================================================

int32_t* __convention("regparm")sub_42e30c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* result = sub_431bcc(arg1)
    
    if (result.b != 0)
        result = arg1
        
        if ((result[8].b & 8) == 0)
            if (arg1[0x48].w == 0)
                sub_42e3a0(arg1)
                int32_t* var_20 = &var_4
                int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
                TEB* fsbase
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                (*(*arg1 + 0x40))(ExceptionList, var_24, var_20)
                (*(*arg1 + 0x88))(arg1)
                fsbase->NtTib.ExceptionList = arg1
                __return_addr = &data_42e39a
                arg1[0x11].w &= 0xffef
                return sub_42e3a8(arg1)
            
            result = arg1
            result[0x11].w |= 0x10
    
    return result
}
