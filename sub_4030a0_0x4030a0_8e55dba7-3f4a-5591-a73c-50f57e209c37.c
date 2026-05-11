// ============================================================
// 函数名称: sub_4030a0
// 虚拟地址: 0x4030a0
// WARP GUID: 8e55dba7-3f4a-5591-a73c-50f57e209c37
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0
// [被调用的父级函数]: sub_412d78, sub_4a84a7, sub_4b06c8, sub_416d6c, sub_42e3d0, sub_48fb3c, sub_442994, sub_41e6c8, sub_41c3a4, sub_41c8f4, sub_430304, sub_4e649b, sub_424b94, sub_49f368, sub_4ae168, sub_41dae0, sub_43baf0, sub_425f10, sub_415b58, sub_4358ec, sub_49c237, sub_41c0cc, sub_410ea4, sub_431ce8, sub_4ad8c0, sub_42e220, sub_41b9bc, sub_4ac078, sub_447f54, sub_4a0968, sub_4a07dd, sub_43c480, sub_437c84, sub_43709c, sub_4aad00, sub_4e548c, sub_4b125c, sub_42db2c, sub_453acc, sub_4b008c, sub_4adcfc, sub_52c7c8, sub_446fc8, sub_41f7e0, sub_412ea8, sub_4545b0, sub_4a5c8c, sub_4ae8f4, sub_4aaf6c, sub_51d12c, sub_4473f4, sub_495068, sub_45455c, sub_4365f4, sub_4a20ac, sub_41f53c, sub_4ac110, sub_415df8, sub_49f0a4, sub_4165dc, sub_41b494, sub_434ebc, sub_42a550, sub_440f88, sub_4ab3e8, sub_40c8fc, sub_420080, sub_4164f4, sub_441c2c, sub_4a06f4, sub_414da8, sub_4132fc, sub_41e5a0, sub_4a87b0, sub_4a0af8, sub_42e4a4, sub_49fa84, sub_4337f8, sub_410138, sub_490a14, sub_446f98, sub_41f898, sub_43caf4, sub_4e6659, sub_41b1ac, sub_4ad27c, sub_42968c, sub_49c0d4, sub_4af608, sub_5101f8, sub_41f72c, sub_49657c, sub_4140e4, sub_4986c7, sub_49ca70, sub_429b88, sub_41920c, sub_4cfedc, sub_4a8988, sub_4258dc, sub_426afc, sub_4a1980, sub_416764, sub_493fc0, sub_41078c, sub_42a224, sub_43e460, sub_4abaa4, sub_415e8c, sub_51b5c0, sub_41b7e4, sub_4136c4, sub_4adc14, sub_447b8c, sub_439a38, sub_41b0b8, sub_4a3d84, sub_41b3fc
// ============================================================

void __fastcallsub_4030a0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax
    int32_t* eax
    void* esp
    
    if (arg2.b != 0)
        void var_10
        esp = &var_10
        eax = sub_4033d0(arg1, arg2)
    
    if (arg2.b != 0)
        sub_403428(eax)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
}
