// ============================================================
// 函数名称: sub_4445ed
// 虚拟地址: 0x4445ed
// WARP GUID: 776c390b-194c-5309-b0a4-234ca29fa7d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowLongA, GetWindowLongA, CreateWindowExA, SetWindowPos, SendMessageA
// [内部子函数调用]: sub_43a014, sub_440bfc, sub_444f08, sub_4318d0, sub_42b220, sub_441bc0, sub_42b1dc
// [被调用的父级函数]: 无
// ============================================================

void* __fastcallsub_4445ed(int32_t arg1, char arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2
    sub_441bc0(arg3)
    void* result = data_53040c
    
    if (*result != 0)
        if (arg3[0x211] == 3)
            result = SendMessageA(sub_4318d0(arg3), 0x80, 1, 0)
        else
            HICON lParam = sub_444f08(arg3)
            result = SendMessageA(sub_4318d0(arg3), 0x80, 1, lParam)
    
    if ((arg3[0x20] & 0x10) == 0)
        result.b = arg3[0x217]
        char temp0_1 = result.b
        result.b -= 2
        
        if (temp0_1 == 2)
            int32_t var_4 = 0xff00
            int32_t param = 0
            void* esi_1 = *(arg3 + 0x240)
            
            if (esi_1 != 0)
                param = sub_43a014(esi_1)
            
            HINSTANCE hInstance = data_5314dc
            HWND hWndParent = sub_4318d0(arg3)
            int32_t nHeight = sub_42b220(arg3)
            *(arg3 + 0x23c) = CreateWindowExA(WS_EX_CLIENTEDGE, sub_444722+2, nullptr, 0x56330001, 0, 
                0, sub_42b1dc(arg3), nHeight, hWndParent, nullptr, hInstance, &param)
            *(arg3 + 0x260) = sub_440bfc(sub_44374c, arg3)
            *(arg3 + 0x25c) = GetWindowLongA(*(arg3 + 0x23c), 0xfffffffc)
            return SetWindowLongA(*(arg3 + 0x23c), 0xfffffffc, *(arg3 + 0x260))
        
        char temp1_1 = result.b
        result.b -= 1
        
        if (temp1_1 == 1)
            return SetWindowPos(sub_4318d0(arg3), 0xffffffff, 0, 0, 0, 0, 0x13)
    
    return result
}
