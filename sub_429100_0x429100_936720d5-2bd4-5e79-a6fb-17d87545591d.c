// ============================================================
// 函数名称: sub_429100
// 虚拟地址: 0x429100
// WARP GUID: 936720d5-2bd4-5e79-a6fb-17d87545591d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_403428, sub_428ff4, sub_419090, sub_41fda0, sub_418f10
// [被调用的父级函数]: sub_429cf8, sub_42c2ec
// ============================================================

int32_t* __convention("regparm")sub_429100(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    sub_428ff4(arg1, 0, ecx)
    int32_t edx
    edx.b = 1
    arg1[0x10] = sub_418f10(sub_4172a2+0x206, edx)
    sub_41fda0(0, 0xffffff)
    sub_419090()
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg1
}
