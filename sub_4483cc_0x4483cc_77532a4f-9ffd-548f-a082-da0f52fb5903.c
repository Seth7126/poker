// ============================================================
// 函数名称: sub_4483cc
// 虚拟地址: 0x4483cc
// WARP GUID: 77532a4f-9ffd-548f-a082-da0f52fb5903
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindow, GetWindowLongA
// [内部子函数调用]: sub_4103c8, sub_4318d0
// [被调用的父级函数]: sub_44843c
// ============================================================

int32_t __stdcallsub_4483cc(HWND arg1, struct HWND__** arg2)
{
    // 第一条实际指令: if (GetWindow(arg1, GW_OWNER) == *(data_5317d8 + 0x24))
    if (GetWindow(arg1, GW_OWNER) == *(data_5317d8 + 0x24))
        if ((GetWindowLongA(arg1, 0xffffffec) & 8) == 0)
            *arg2 = arg1
            return 0
        
        int32_t* edi_1 = *(data_5317d8 + 0x38)
        
        if (edi_1 != 0 && arg2[1].b == 0 && arg1 == sub_4318d0(edi_1))
            *arg2 = arg1
            return 0
        
        sub_4103c8(*(data_5317d8 + 0x80), arg1)
    
    return 0xffffffff
}
