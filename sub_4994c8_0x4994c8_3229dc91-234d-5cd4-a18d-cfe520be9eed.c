// ============================================================
// 函数名称: sub_4994c8
// 虚拟地址: 0x4994c8
// WARP GUID: 3229dc91-234d-5cd4-a18d-cfe520be9eed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_40b4b0
// [被调用的父级函数]: sub_49ae68, sub_4a8f18, sub_4a8ea2
// ============================================================

int32_t* __fastcallsub_4994c8(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, char* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg3 = sub_4033d0(arg1, arg2)
    
    sub_40b4b0(arg3, 0, arg4)
    arg3[3] = arg1
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg3
}
